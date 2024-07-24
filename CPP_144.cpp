int getGCD(int a, int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    bool simplify(string x, string n){
        int num1 = stoi(x.substr(0, x.find('/')));
        int den1 = stoi(x.substr(x.find('/') + 1));
        int num2 = stoi(n.substr(0, n.find('/')));
        int den2 = stoi(n.substr(n.find('/') + 1));

        return (num1 * den2 == num2 * den1);
    }