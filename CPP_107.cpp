bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> even_odd_palindrome(int n);

int main(){
    int n;
    std::cin >> n;
    
    std::vector<int> result = even_odd_palindrome(n);
    
    assert(issame(result, {0, 1}));

    for(int i = 0; i < result.size(); ++i){
        std::cout << result[i] << " ";
    }
    
    return 0;
}