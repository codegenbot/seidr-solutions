#include <vector>
#include <iostream>

bool issame(vector<int> a, vector<int> b);

vector<int> largest_smallest_integers(vector<int> lst);

int annual_income(vector<int> lst); // Function declaration

vector<int> largest_smallest_integers(vector<int> lst){
    int max_neg = INT_MIN, min_pos = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > max_neg){
            max_neg = num;
        }
        if(num > 0 && num < min_pos){
            min_pos = num;
        }
    }
    
    return {max_neg, min_pos};
}

int annual_income(vector<int> lst){
    int total = 0;
    for(int income : lst){
        total += income;
    }
    return total;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    std::vector<int> incomes = {50000, 60000, 70000};
    std::vector<int> same_incomes = {50000, 60000, 70000};
    
    std::cout << "Is incomes same as same_incomes: " << issame(incomes, same_incomes) << std::endl;
    
    std::cout << "Largest neg and smallest pos integers: ";
    std::vector<int> result = largest_smallest_integers({-2, 3, -5, 8, 1, -9});
    for(int num : result){
        std::cout << num << " ";
    }
    
    return 0;
}