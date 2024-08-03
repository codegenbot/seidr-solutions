#include "catch.hpp"

#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - floor(number);
}

TEST_CASE("Truncate number test case", "[truncate_number]") {
    REQUIRE(fabs(truncate_number(123.456) - 0.456) < 1e-4);
}