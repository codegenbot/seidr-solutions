#include <vector>

vector<int> make_a_pile(int n);

bool issame(vector<int> a, vector<int> b);

vector<int> make_a_pile(int n){
    vector<int> stones;
    int stonesInLevel = n;
    for(int i=0; i<n; i++){
        stones.push_back(stonesInLevel);
        if(n % 2 == 0){
            stonesInLevel += 2;
        } else {
            stonesInLevel += 1;
        }
    }
    return stones;
}

bool issame(vector<int> a, vector<int> b){
    int n = a.size();
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
  int n;
  cin >> n;
  vector<int> pileA = make_a_pile(n);
  vector<int> pileB = make_a_pile(n);
  
  if(issame(pileA, pileB)){
    cout << "Same" << endl;
  } else {
    cout << "Different" << endl;
  }
  
  return 0;
}