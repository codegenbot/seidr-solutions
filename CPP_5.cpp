#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);
vector<int> intersperse(vector<int> numbers, int delimiter);

bool issame(vector<int> a, vector<int> b) {
  // Your implementation of issame function
  // TODO: Implement the function
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

int main() {
  // Your main code
  assert(issame(intersperse({2, 2, 2}, 2),{2, 2, 2, 2, 2}));
}