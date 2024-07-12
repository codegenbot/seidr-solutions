int main { 
    int num1, num2;  
    std::vector<std::string> result;  

    std::cin >> num1 >> num2;

    if (num1 >= 1 && num1 <= 9) {
        for(int i = 0; i < 2; i++) {
            switch (i ? num2 : num1) {
                case 1:
                    result.push_back(i ? "One" : "One");
                    break;
                case 2:
                    result.push_back(i ? "Two" : "Two");
                    break;
                case 3:
                    result.push_back(i ? "Three" : "Three");
                    break;
                case 4:
                    result.push_back(i ? "Four" : "Four");
                    break;
                case 5:
                    result.push_back(i ? "Five" : "Five");
                    break;
                case 6:
                    result.push_back(i ? "Six" : "Six");
                    break;
                case 7:
                    result.push_back(i ? "Seven" : "Seven");
                    break;
                case 8:
                    result.push_back(i ? "Eight" : "Eight");
                    break;
                case 9:
                    result.push_back(i ? "Nine" : "Nine");
                    break;
            }
        }
    }

    std::vector<std::string> temp = by_length(num1);
    if (issame(temp, result)) {
        for(int i = 0; i < num2; i++) {
            result.insert(result.begin(), temp[i]);
        }
    } else {
        return 1;
    }
    
    std::reverse(result.begin(), result.end());
    
    for(std::vector<std::string>::iterator it = result.begin(); it != result.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}