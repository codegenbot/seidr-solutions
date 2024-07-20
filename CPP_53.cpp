#include<cstdlib>
using namespace std;
int add(int x, int y) {
    return x + y;
}
int main() {
    srand(time(0));  // seed for randomness
    int x=rand()%1000;
    int y=rand()%1000;
    cout << "Sum: " << add(x,y) << endl;
    return 0;
}