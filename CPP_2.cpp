
#include "catch2/catch.hpp"

#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - std::floor(number);
}

TEST_CASE("Truncate number test", "[truncate_number]") {
    REQUIRE(std::fabs(truncate_number(123.456) - 0.456) < 1e-4);
}