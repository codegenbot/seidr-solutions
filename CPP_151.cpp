#include <vector>

double double_the_difference(std::vector<float> lst){
    double sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main(){
    std::vector<float> lst = {1.5, 2.0, 3.5, 4.0, 5.5, 6.0};
    double result = double_the_difference(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}