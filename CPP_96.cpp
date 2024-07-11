vector<int> count_up_to(int n){
        vector<int> result;
        for (int num = 2; num < n; ++num) {
            bool isPrime = true;
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                result.push_back(num);
            }
        }
        return result;
    }