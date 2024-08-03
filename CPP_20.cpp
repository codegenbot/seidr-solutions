bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

int solveProblem() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {3.1, 4.1}));
}