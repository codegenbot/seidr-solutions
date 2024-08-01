#include <iostream>
#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal){
    std::string binary = "";

    while(decimal > 0){
        binary = ((decimal % 2) == 0 ? '0' : '1') + binary;
        decimal /= 2;
    }
    
    return "db" + binary + "db";
}

#define CATCH_CONFIG_MAIN
#include "catch.hpp"