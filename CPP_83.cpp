int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= pow(10, n-1); i++) {
        std::string str = "";
        bool start_with_one = false, end_with_one = false;
        for (auto j = 0; j < n; j++) {
            if ((i % 2 == 0) ? '0' : '1') { 
                str += (i % 2 == 0 ? '0' : '1');
                if (str[j] == '1') {
                    start_with_one = true;
                }
            } else {
                str += (i % 2 == 0 ? '0' : '1'); 
                if (str[j] == '1') {
                    end_with_one = true;
                }
            }
        }
        if ((start_with_one || i == 1) && (end_with_one || i == pow(10, n-1))) {
            count++;
        }
    }
    return count;

}