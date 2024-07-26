if(number + remaining < need){
        return {number + remaining, 0};
    }
    return {number + need, remaining - (need - number)};
}