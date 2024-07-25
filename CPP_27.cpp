int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Flipped case: " << flip_case(str) << endl;
    return 0;
}