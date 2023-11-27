#include <iostream>
#include <vector>
#include <cmath>

int double_the_difference(std::vector<float> lst){
    int sum = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0){
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

int solve(){
    int n;
    std::cin >> n;
    std::vector<float> lst;
    for(int i=0; i<n; i++){
        float num;
        std::cin >> num;
        lst.push_back(num);
    }

    int odd_sum = double_the_difference(lst);

    return odd_sum;
}

int main(){
    int result = solve();
    std::cout << result << std::endl;

    return 0;
}