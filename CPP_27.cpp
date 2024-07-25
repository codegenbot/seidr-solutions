int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string result = flip_case(str);
    cout << "Flipped case: " << result << endl;
    return 0;
}