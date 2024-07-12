vector<string> by_length(int n) {
    vector<string> result;
    
    if (n >= 1000) {
        int q = n / 1000;
        result.push_back(to_string(q));
        result.push_back(" Thousand");
        n %= 1000;
    }
    
    if (n >= 90) {
        if (n % 100 >= 10)
            result.push_back(issame(n % 100, 10) ? " Ninety" : to_string(n % 100) + " Ten");
        else
            result.push_back(" Ninety");
        n %= 90;
    } else if (n >= 80) {
        if (n % 100 >= 20)
            result.push_back(issame(n % 100, 10) ? " Eighty" : to_string(n % 100) + " Ten");
        else
            result.push_back(" Eighty");
        n %= 80;
    } else if (n >= 70) {
        if (n % 100 >= 30)
            result.push_back(issame(n % 100, 20) ? " Seventy" : to_string(n % 100) + " Ten");
        else
            result.push_back(" Seventy");
        n %= 70;
    } else if (n >= 60) {
        if (n % 100 >= 40)
            result.push_back(issame(n % 100, 20) ? " Sixty" : to_string(n % 100) + " Ten");
        else
            result.push_back(" Sixty");
        n %= 60;
    } else if (n >= 50) {
        if (n % 100 == 50)
            result.push_back(" Fifty");
        else
            result.push_back(to_string(n % 50));
        n %= 50;
    } else if (n >= 40) {
        if (n % 100 == 40)
            result.push_back(" Forty");
        else
            result.push_back(to_string(n % 40) + " Ten");
        n %= 40;
    } else if (n >= 30) {
        if (n % 100 == 30)
            result.push_back(" Thirty");
        else
            result.push_back(to_string(n % 30));
        n %= 30;
    } else if (n >= 20) {
        if (n % 100 >= 10)
            result.push_back(issame(n % 100, 10) ? " Twenty" : to_string(n % 100) + " Ten");
        else
            result.push_back(" Twenty");
        n %= 20;
    } else {
        if (n == 19)
            result.push_back(" Nineteen");
        else if (n >= 10) {
            result.push_back(to_string(n));
        } else {
            switch (n) {
                case 1:
                    result.push_back(" One");
                    break;
                case 2:
                    result.push_back(" Two");
                    break;
                case 3:
                    result.push_back(" Three");
                    break;
                case 4:
                    result.push_back(" Four");
                    break;
                case 5:
                    result.push_back(" Five");
                    break;
                case 6:
                    result.push_back(" Six");
                    break;
                case 7:
                    result.push_back(" Seven");
                    break;
                case 8:
                    result.push_back(" Eight");
                    break;
                case 9:
                    result.push_back(" Nine");
                    break;
            }
        }
    }
    
    return result;
}

bool issame(int n, int base) {
    return n % base == 0;
}