
def max_fill(grid, bucket_capacity):
    # Complete the following code given the task description and function signature.
    # Hint: Think about the problem in a different way.
    #       What are the possible values for each cell?
    #       What are the possible values for the next cell?
    #       What is the relation between the current and next cell?
    #       What is the relation between the current cell and the previous one?
    #       What is the relation between the current cell and the previous row?
    #       What is the relation between the current cell and the previous column?
    #       What is the relation between the current cell and the previous row and column?
    #       Can you find a pattern in the above questions?
    #       Can you find a pattern in the data?
    #       Can you find a pattern in the data that can be used to find the solution?
    #       Can you find a pattern in the data that can be used to find the solution efficiently?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand, and is easy to maintain?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand, and is easy to maintain, and is easy to test?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand, and is easy to maintain, and is easy to test, and is easy to debug?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand, and is easy to maintain, and is easy to test, and is easy to debug, and is easy to optimize?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand, and is easy to maintain, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand, and is easy to maintain, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize, and is easy to scale?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand, and is easy to maintain, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize, and is easy to scale, and is easy to deploy?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand, and is easy to maintain, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize, and is easy to scale, and is easy to deploy, and is easy to monitor?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand, and is easy to maintain, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize, and is easy to scale, and is easy to deploy, and is easy to monitor, and is easy to secure?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand, and is easy to maintain, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize, and is easy to scale, and is easy to deploy, and is easy to monitor, and is easy to secure, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize, and is easy to scale, and is easy to deploy, and is easy to monitor, and is easy to secure, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize, and is easy to scale, and is easy to deploy, and is easy to monitor, and is easy to secure?
    #       Can you find a pattern in the data that can be used to find the solution efficiently with less memory and time, and is easy to implement, and is easy to understand, and is easy to maintain, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize, and is easy to scale, and is easy to deploy, and is easy to monitor, and is easy to secure, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize, and is easy to scale, and is easy to deploy, and is easy to monitor, and is easy to secure, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize, and is easy to scale, and is easy to deploy, and is easy to monitor, and is easy to secure, and is easy to test, and is easy to debug, and is easy to optimize, and is easy to parallelize, and is easy to scale, and is easy to deploy, and is easy to monitor, and is easy to secure?

    # Write your code here.
    # return number_of_buckets_lowered

    pass


if __name__ == "__main__":
    """
    Do not modify this code.
    """

    grid = [[0,0,1,0], [0,1,0,0], [1,1,1,1]]
    bucket_capacity = 1
    print(max_fill(grid, bucket_capacity))

    Example 2:
        Input: 
            grid : [[0,0,1,1], [0,0,0,0], [1,1,1,1], [0,1,1,1]]
            bucket_capacity : 2
        Output: 5
    
    Example 3:
        Input: 
            grid : [[0,0,0], [0,0,0]]
            bucket_capacity : 5
        Output: 0

    Constraints:
        * all wells have the same length
        * 1 <= grid.length <= 10^2
        * 1 <= grid[:,1].length <= 10^2
        * grid[i][j] -> 0 | 1
        * 1 <= capacity <= 10
    """
