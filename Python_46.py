

def fib4(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4(5)
    4
    >>> fib4(6)
    8
    >>> fib4(7)
    14
    # Complete the following code given the task description and function signature.
    # Please do not use recursion.
    # You may use any data structures you like.
    # You may use any language you like.
    # You may use any IDE you like.
    # You may use any version control you like.
    # You may use any testing framework you like.
    # You may use any build tool you like.
    # You may use any dependency management tool you like.
    # You may use any documentation tool you like.
    # You may use any logging tool you like.
    # You may use any code quality tool you like.
    # You may use any code coverage tool you like.
    # You may use any continuous integration tool you like.
    # You may use any continuous delivery tool you like.
    # You may use any continuous deployment tool you like.
    # You may use any cloud provider you like.
    # You may use any cloud service you like.
    # You may use any cloud platform you like.
    # You may use any cloud infrastructure you like.
    # You may use any cloud database you like.
    # You may use any cloud storage you like.
    # You may use any cloud messaging you like.
    # You may use any cloud logging you like.
    # You may use any cloud monitoring you like.
    # You may use any cloud alerting you like.
    # You may use any cloud security you like.
    # You may use any cloud load balancing you like.
    # You may use any cloud autoscaling you like.
    # You may use any cloud containerization you like.
    # You may use any cloud orchestration you like.
    # You may use any cloud serverless you like.
    # You may use any cloud function as a service you like.
    # You may use any cloud platform as a service you like.
    # You may use any cloud infrastructure as a service you like.
    # You may use any cloud software as a service you like.
    # You may use any cloud database as a service you like.
    # You may use any cloud storage as a service you like.
    # You may use any cloud messaging as a service you like.
    # You may use any cloud logging as a service you like.
    # You may use any cloud monitoring as a service you like.
    # You may use any cloud alerting as a service you like.
    # You may use any cloud security as a service you like.
    # You may use any cloud load balancing as a service you like.
    # You may use any cloud autoscaling as a service you like.
    # You may use any cloud containerization as a service you like.
    # You may use any cloud orchestration as a service you like.
    # You may use any cloud serverless as a service you like.
    # You may use any cloud function as a service as a service you like.
    # You may use any cloud platform as a service as a service you like.
    # You may use any cloud infrastructure as a service as a service you like.
    # You may use any cloud software as a service as a service you like.
    # You may use any cloud database as a service as a service you like.
    # You may use any cloud storage as a service as a service you like.
    # You may use any cloud messaging as a service as a service you like.
    # You may use any cloud logging as a service as a service you like.
    # You may use any cloud monitoring as a service as a service you like.
    # You may use any cloud alerting as a service as a service you like.
    # You may use any cloud security as a service as a service you like.
    # You may use any cloud load balancing as a service as a service you like.
    # You may use any cloud autoscaling as a service as a service you like.
    # You may use any cloud containerization as a service as a service you like.
    # You may use any cloud orchestration as a service as a service you like.
    # You may use any cloud serverless as a service as a service you like.
    # You may use any cloud function as a service as a service as a service you like.
    # You may use any cloud platform as a service as a service as a service you like.
    # You may use any cloud infrastructure as a service as a service as a service you like.
    # You may use any cloud software as a service as a service as a service you like.
    # You may use any cloud database as a service as a service as a service you like.
    # You may use any cloud storage as a service as a service as a service you like.
    # You may use any cloud messaging as a service as a service as a service you like.
    # You may use any cloud logging as a service as a service as a service you like.
    # You may use any cloud monitoring as a service as a service as a service you like.
    # You may use any cloud alerting as a service as a service as a service you like.
    # You may use any cloud security as a service as a service as a service you like.
    # You may use any cloud load balancing as a service as a service as a service you like.
    # You may use any cloud autoscaling as a service as a service as a service you like.
    # You may use any cloud containerization as a service as a service as a service you like.
    # You may use any cloud orchestration as a service as a service as a service you like.
    # You may use any cloud serverless as a service as a service as a service you like.
    # You may use any cloud function as a service as a service as a service as a service you like.
    # You may use any cloud platform as a service as a service as a service as a service you like.
    # You may use any cloud infrastructure as a service as a service as a service as a service you like.
    # You may use any cloud software as a service as a service as a service as a service you like.
    # You may use any cloud database as a service as a service as a service as a service you like.
    # You may use any cloud storage as a service as a service as a service as a service you like.
    # You may use any cloud messaging as a service as a service as a service as a service you like.
    # You may use any cloud logging as a service as a service as a service as a service you like.
    # You may use any cloud monitoring as a service as a service as a service as a service you like.
    # You may use any cloud alerting as a service as a service as a service as a service you like.
    # You may use any cloud security as a service as a service as a service as a service you like.
    # You may use any cloud load balancing as a service as a service as a service as a service you like.
    # You may use any cloud autoscaling as a service as a service as a service as a service you like.
    # You may use any cloud containerization as a service as a service as a service as a service you like.
    # You may use any cloud orchestration as a service as a service as a service as a service you like.
    # You may use any cloud serverless as a service as a service as a service as a service you like.
    # You may use any cloud function as a service as a service as a service as a service as a service you like.
    # You may use any cloud platform as a service as a service as a service as a service as a service you like.
    # You may use any cloud infrastructure as a service as a service as a service as a service as a service you like.
    # You may use any cloud software as a service as a service as a service as a service as a service you like.
    # You may use any cloud database as a service as a service as a service as a service as a service you like.
    # You may use any cloud storage as a service as a service as a service as a service as a service you like.
    # You may use any cloud messaging as a service as a service as a service as a service as a service you like.
    # You may use any cloud logging as a service as a service as a service as a service as a service you like.
    # You may use any cloud monitoring as a service as a service as a service as a service as a service you like.
    # You may use any cloud alerting as a service as a service as a service as
    """
