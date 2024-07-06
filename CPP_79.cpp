std::string binary = "";
do{
    if(n % 2 == 0) binary += '0';
    else binary += '1';
    n /= 2;
}while(n > 0);
return std::string(binary.rbegin(), binary.rend());