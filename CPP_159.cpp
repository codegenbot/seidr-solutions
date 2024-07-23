vector<string> eat(int number, int need, int remaining) {
    string task = (number + need <= 1000)? "Eating" : ((remaining > 0)? "Still eating" : "Not Eating");
    string result = to_string(number + need) + " " + to_string(min(remaining, 1000 - number - need));
    
    return {task, result};
}