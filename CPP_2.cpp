#include <cmath>
#include <cassert>

float truncate_number(float number){
    return number - std::floor(number);
}

float yourFunctionName(float inputParameter){
    // Implement your code here as per the task description
    return truncate_number(inputParameter);
}