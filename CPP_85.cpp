#include <vector>

int main() {
    std::vector<int> lst;
    int num;
    
    cout << "Enter numbers (enter -1 to stop input): ";
    
    while((cin >> num) && num != -1) {
        lst.push_back(num);
    }
    
    if (!lst.empty()) {
        int result = add(lst);
        cout << "Sum of even numbers: " << result << endl;
    } else {
        cout << "No input received." << endl;
    }
    
    return 0;
}

int add(std::vector<int> lst){
    int sum = 0;
    for(int i=1; i<lst.size(); i=i+2){
        if(i < lst.size() && lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}