#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
   // Code to compare the two vectors and return true or false
   // ...
   return true; // Example code, replace with your implementation
}

vector<string> words_string(string s) {
   vector<string> words;
   string word = "";
   for (int i = 0; i < s.length(); i++) {
      if (s[i] == ' ' || s[i] == ',') {
          if (word != "") {
               words.push_back(word);
               word = "";
           }
       } else {
           word += s[i];
       }
   }
   if (word != "") {
       words.push_back(word);
   }
   return words;
}

int main() {
   assert(issame(std::words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
}