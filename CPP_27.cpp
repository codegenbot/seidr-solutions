int main(){
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    string result = flip_case(str);
    cout << "The flipped case is: " << result << endl;
    return 0;
}