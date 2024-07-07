string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char* p = text.c_str();
    size_t len = text.size();
    while(len > 0 && len <= sizeof(ctx.buf)) {
        memcpy(ctx.buf, p, min(len, (size_t)sizeof(ctx.buf)));
        p += min(len, (size_t)sizeof(ctx.buf));
        len -= min(len, (size_t)sizeof(ctx.buf));
        MD5_Update(&ctx, ctx.buf, min(len, (size_t)sizeof(ctx.buf)));
    }
    if (len > 0) {
        size_t remaining = len;
        p = text.c_str();
        while(remaining > sizeof(ctx.buf)) {
            MD5_Update(&ctx, p, sizeof(ctx.buf));
            p += sizeof(ctx.buf);
            remaining -= sizeof(ctx.buf);
        }
        MD5_Update(&ctx, p, remaining);
    }
    MD5_Final(md5, &ctx);
    string result;
    for (size_t i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.append(buf);
    }
    return result;
}