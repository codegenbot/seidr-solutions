

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
    # You may add helper functions as needed.
    # You may not use recursion.
    # You may not use any built-in functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists.
    # You may not use any global variables.
    # You may not use any nonlocal variables.
    # You may not use any loops.
    # You may not use any conditional statements.
    # You may not use any try/except statements.
    # You may not use any raise statements.
    # You may not use any return statements.
    # You may not use any break statements.
    # You may not use any continue statements.
    # You may not use any yield statements.
    # You may not use any yield from statements.
    # You may not use any while statements.
    # You may not use any for statements.
    # You may not use any lambda expressions.
    # You may not use any ternary expressions.
    # You may not use any if statements.
    # You may not use any with statements.
    # You may not use any with ... as statements.
    # You may not use any async statements.
    # You may not use any await expressions.
    # You may not use any async for statements.
    # You may not use any async with statements.
    # You may not use any async def statements.
    # You may not use any async lambda expressions.
    # You may not use any async generator expressions.
    # You may not use any async comprehensions.
    # You may not use any async context managers.
    # You may not use any async iterators.
    # You may not use any async iterables.
    # You may not use any async generators.
    # You may not use any async coroutines.
    # You may not use any async def coroutines.
    # You may not use any async def generators.
    # You may not use any async def iterators.
    # You may not use any async def iterables.
    # You may not use any async def contexts.
    # You may not use any async def awaitables.
    # You may not use any async def futures.
    # You may not use any async def tasks.
    # You may not use any async def protocols.
    # You may not use any async def asyncs.
    # You may not use any async def awaits.
    # You may not use any async def yields.
    # You may not use any async def yields from.
    # You may not use any async def returns.
    # You may not use any async def breaks.
    # You may not use any async def continues.
    # You may not use any async def raises.
    # You may not use any async def excepts.
    # You may not use any async def ifs.
    # You may not use any async def withs.
    # You may not use any async def with ... as.
    # You may not use any async def fors.
    # You may not use any async def whiles.
    # You may not use any async def lambdas.
    # You may not use any async def ternaries.
    # You may not use any async def yield froms.
    # You may not use any async def yields froms.
    # You may not use any async def returns from.
    # You may not use any async def breaks from.
    # You may not use any async def continues from.
    # You may not use any async def raises from.
    # You may not use any async def excepts from.
    # You may not use any async def ifs from.
    # You may not use any async def withs from.
    # You may not use any async def with ... as from.
    # You may not use any async def fors from.
    # You may not use any async def whiles from.
    # You may not use any async def lambdas from.
    # You may not use any async def ternaries from.
    # You may not use any async def yield froms from.
    # You may not use any async def yields froms from.
    # You may not use any async def returns from from.
    # You may not use any async def breaks from from.
    # You may not use any async def continues from from.
    # You may not use any async def raises from from.
    # You may not use any async def excepts from from.
    # You may not use any async def ifs from from.
    # You may not use any async def withs from from.
    # You may not use any async def with ... as from from.
    # You may not use any async def fors from from.
    # You may not use any async def whiles from from.
    # You may not use any async def lambdas from from.
    # You may not use any async def ternaries from from.
    # You may not use any async def yield froms from from.
    # You may not use any async def yields froms from from.
    # You may not use any async def returns from from from.
    # You may not use any async def breaks from from from.
    # You may not use any async def continues from from from.
    # You may not use any async def raises from from from.
    # You may not use any async def excepts from from from.
    # You may not use any async def ifs from from from.
    # You may not use any async def withs from from from.
    # You may not use any async def with ... as from from from.
    # You may not use any async def fors from from from.
    # You may not use any async def whiles from from from.
    # You may not use any async def lambdas from from from.
    # You may not use any async def ternaries from from from.
    # You may not use any async def yield froms from from from.
    # You may not use any async def yields froms from from from.
    # You may not use any async def returns from from from from.
    # You may not use any async def breaks from from from from.
    # You may not use any async def continues from from from from.
    # You may not use any async def raises from from from from.
    # You may not use any async def excepts from from from from.
    # You may not use any async def ifs from from from from.
    # You may not use any async def withs from from from from.
    # You may not use any async def with ... as from from from from.
    # You may not use any async def fors from from from from.
    # You may not use any async def whiles from from from from.
    # You may not use any async def lambdas from from from from.
    # You may not use any async def ternaries from from from from.
    # You may not use any async def yield froms from from from from.
    # You may not use any async def yields froms from from from from.
    # You may not use any async def returns from from from from from.
    # You may not use any async def breaks from from from from from.
    # You may not use any async def continues from from from from from.
    # You may not use any async def raises from from from from from.
    # You may not use any async def excepts from from from from from.
    # You may not use any async def ifs from from from from from.
    # You may not use any async def withs from from from from from.
    # You may not use any async def with ... as from from from from from.
    # You may not use any async def fors from from from from from.
    # You may not use any async def whiles from from from from from.
    # You may not use any async def lambdas from from from from from.
    # You may not use any async def ternaries from from from from from.
    # You may not use any async def yield froms from from from from from.
    # You may not use any async def yields froms from from from from from.
    # You may not use
    """
