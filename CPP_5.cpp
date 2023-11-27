#include <vector>

bool issame(vector<int> a, vector<int> b);   // Function prototype
vector<int> intersperse(vector<int> numbers, int delimiter);   // Function prototype

int main() {
  // Your main code
}

bool issame(vector<int> a, vector<int> b) {
  // Your implementation of issame function
}

vector<int> intersperse(vector<int> numbers, int delimiter) {
  vector<int> result;
  for(int i=0; i<numbers.size(); i++){
      result.push_back(numbers[i]);
      if(i != numbers.size()-1){
          result.push_back(delimiter);
      }
  }
  return result;
}