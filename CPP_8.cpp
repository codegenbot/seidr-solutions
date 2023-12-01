#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b){
  if(a.size() != b.size()){
    return false;
  }

  for(int i=0; i<a.size(); i++){
    if(a[i] != b[i]){
      return false;
    }
  }

  return true;
}

vector<int> sum_product(vector<int> numbers){
  int sum = 0;
  int product = 1;

  for(int i=0; i<numbers.size(); i++){
    sum += numbers[i];
    product *= numbers[i];
  }

  return {sum, product};
}

int main(){
  // Your code for testing the functions...

  // Test the issame function
  vector<int> a = {1, 2, 3};
  vector<int> b = {1, 2, 3};
  vector<int> c = {1, 2, 4};

  cout << "issame(a, b): " << issame(a, b) << endl; // Output: 1
  cout << "issame(a, c): " << issame(a, c) << endl; // Output: 0

  // Test the sum_product function
  vector<int> numbers = {1, 2, 3, 4};
  vector<int> result = sum_product(numbers);

  cout << "Sum: " << result[0] << endl; // Output: 10
  cout << "Product: " << result[1] << endl; // Output: 24

  return 0;
}