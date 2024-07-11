#!/usr/bin/env python
def solution(lst):
    return sum(i for i in lst[1:] if isinstance(i, int) and i % 2 != 0)