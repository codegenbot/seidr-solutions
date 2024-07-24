int x_num = stoi(x.substr(0, x.find('/')));
    int x_denom = stoi(x.substr(x.find('/') + 1));
    int n_num = stoi(n.substr(0, n.find('/')));
    int n_denom = stoi(n.substr(n.find('/') + 1));

    int result_num = x_num * n_num;
    int result_denom = x_denom * n_denom;

    return result_num % result_denom == 0;
}