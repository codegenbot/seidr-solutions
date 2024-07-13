string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 0)
            binary += '0';
        else
            binary += '1';
        decimal /= 2;
    }
    return binary;
}

int main(){
    int decimal;
    cout << "Enter a number: ";
    cin >> decimal;
    cout << "Binary representation is: " << decimal_to_binary(decimal) << endl;
    return 0;
}