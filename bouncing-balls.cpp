int main() {
    double start_height, bounce_height, distance = 0;
    int num_bounces;
    
    cin >> start_height >> bounce_height >> num_bounces;
    
    double bounciness_index = bounce_height / start_height;
    
    distance = start_height + start_height * bounciness_index * (pow(bounciness_index, num_bounces) - 1) / (bounciness_index - 1);
    
    cout << distance << endl;
    
    return 0;
}