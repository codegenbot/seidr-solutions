int num_x = stoi(x.substr(0, x.find('/')));
    int den_x = stoi(x.substr(x.find('/') + 1));
    int num_n = stoi(n.substr(0, n.find('/')));
    int den_n = stoi(n.substr(n.find('/') + 1));

    return (num_x * num_n) % (den_x * den_n) == 0;
}