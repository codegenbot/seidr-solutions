```cpp
return (x % 15 == 0) ? "FizzBuzz" : 
       ((x % 3 == 0 && x % 5 != 0) ? "Fizz" : 
        ((x % 5 == 0 && x % 3 != 0) ? "Buzz" : to_string(x)));