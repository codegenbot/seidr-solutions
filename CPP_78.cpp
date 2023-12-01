function hex_key(num: string): int
    count <- 0
    primes <- "2357BD"
    
    for i <- 0 to num.length() - 1 do
        if primes.find(num[i]) != string::npos then
            count <- count + 1
        end if
    end for
    
    return count
end function

assert (hex_key("") == 0)