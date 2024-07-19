using namespace std;

std::string remove_vowels(std::string input) {
    for(char c : input){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'
           && tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' 
           && tolower(c) != 'o' && tolower(c) != 'u'){
            input += tolower(c); // Convert to lowercase and append
        }
    }
    return input; // Return the modified string

}

cout << "Enter a string: ";
string input;
getline(cin, input);

cout << "String after removing vowels: " << remove_vowels(input) << endl;