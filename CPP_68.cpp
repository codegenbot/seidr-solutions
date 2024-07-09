bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> arr;
    int num;
    
    while(std::cin >> num){
        arr.push_back(num);
    }
    
    std::vector<int> result = pluck(arr);
    
    if(result.size() == 2){
        std::cout << result[0] << " " << result[1] << std::endl;
    }
    else{
        std::cout << "No even numbers found." << std::endl;
    }
    
    return 0;
}