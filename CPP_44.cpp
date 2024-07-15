int main(){
    int x = 2;
    for(int i = 2; i <= 10; ++i){
        std::cout << "Base " << i << ": " << change_base(x, i) << std::endl;
    }
    return 0;
}