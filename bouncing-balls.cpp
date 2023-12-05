```cpp
#include <catch2/catch.hpp>

TEST_CASE("Test case 1") {
    float startingHeight = 10.0;
    float firstBounceHeight = 9.5;
    int numBounces = 3;
    REQUIRE(bouncingBalls(startingHeight, firstBounceHeight, numBounces) == 28.75);
}

TEST_CASE("Test case 2") {
    float startingHeight = 5.0;
    float firstBounceHeight = 4.5;
    int numBounces = 2;
    REQUIRE(bouncingBalls(startingHeight, firstBounceHeight, numBounces) == 13.5);
}

TEST_CASE("Test case 3") {
    float startingHeight = 100.0;
    float firstBounceHeight = 90.0;
    int numBounces = 10;
    REQUIRE(bouncingBalls(startingHeight, firstBounceHeight, numBounces) == 980.0);
}
```