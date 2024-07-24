int slashIndexX = x.find('/');
    int numeratorX = stoi(x.substr(0, slashIndexX));
    int denominatorX = stoi(x.substr(slashIndexX + 1));

    int slashIndexN = n.find('/');
    int numeratorN = stoi(n.substr(0, slashIndexN));
    int denominatorN = stoi(n.substr(slashIndexN + 1));

    double result = (double)numeratorX / denominatorX * numeratorN / denominatorN;

    return result == (int)result;
}