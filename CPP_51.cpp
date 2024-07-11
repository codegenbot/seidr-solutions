```cpp
string text;
cout << "Enter a sentence: ";
getline(cin, text);
string result = text; 
for (char c : text) {
    if (std::tolower(c) != 'a' && std::tolower(c) != 'e'
        && std::tolower(c) != 'i' && std::tolower(c) != 'o'
        && std::tolower(c) != 'u')
        result += c; 
}
cout << "Sentence with vowels removed: " << result << endl;
return 0;