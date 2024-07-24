int main() {
    std::vector<std::string> ops; 
    std::vector<int> args;

    int count = 0;
    while(count < 5) { 
        std::cout << "Enter an operator (+, -, * or / or 'q' to quit): ";
        std::string op;
        int arg;
        std::cin >> op >> std::ws >> arg;

        if(op == "q") break;
        
        ops.push_back(op);
        args.push_back(arg);
        count++;
    }
    
    double output = do_algebra(ops, args);

    std::cout << "Output: " << output << std::endl;

    return 0;
}