```
vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == target[0]) {
            int j = 1;
            while (j < target.size() && text[i + j] == target[j]) {
                ++j;
            }
            if (j == target.size()) {
                result.push_back(i);
            }
        }
    }
    return result;
}
```
This code defines a function `indicesOfSubstring` that takes two string arguments: `text` and `target`. The function returns a vector of integers, where each integer represents the index at which the `target` string appears in the `text` string. The function uses a loop to iterate over the characters of the `text` string, and checks if the current character is equal to the first character of the `target` string. If it is, it then checks if the remaining characters of the `target` string are present in the `text` string starting from the next character. If all the characters match, the index at which the `target` string appears is added to the vector. Finally, the function returns the vector containing the indices at which the `target` string appears.

Here's an example of how you can use this code:
```
int main() {
    const string text = "hello world";
    const string target = "world";
    auto result = indicesOfSubstring(text, target);
    cout << "Indices at which 'target' appears in 'text': ";
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}
```
This will output: `Indices at which 'target' appears in 'text': 6 `.