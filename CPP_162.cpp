EVP_MD_CTX_cleanup(ctx);
    EVP_MD_CTX_destroy(ctx);

    OpenSSL_add_all_algorithms();

    return string(mdString);
}