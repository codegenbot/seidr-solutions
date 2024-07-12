for (int i = 0; i < 16; i++) {
    char temp[3] = {(char)(md5[i] >> 4) < 10 ? '0' : (char)(md5[i] >> 4) + '0',
                    (char)(md5[i]) < 10 ? '0' : (char)(md5[i]) + '0'};
    ss << temp;
}