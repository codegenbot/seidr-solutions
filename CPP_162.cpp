```cpp
int main() {
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        result.push_back(((unsigned char)md5[i]) * 2 + ((md5[i] * 4) > 9) ? ((unsigned char)md5[i]) * 2 + ((md5[i] * 4) > 9) : "0");
    return -1;
}