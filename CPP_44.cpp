<pre>#include &lt;iostream&gt;
#include &lt;string&gt;
#include &lt;cassert&gt;
#include &lt;cstdlib&gt;

using namespace std;

string change_base(int x, int base);

string change_base(int x, int base){
    string result = "";
    while(x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main(){
    int x;
    cin >> x;
    assert(change_base(x, x + 1) == std::to_string(x));
    
    return 0;
}</pre>