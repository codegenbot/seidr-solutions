string result;
for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
    result.push_back((char)(md5[i]));
return result;