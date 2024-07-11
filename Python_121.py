#!/usr/bin/env python
def solution(lst):
    result = sum(i for i in lst[1::2] if i % 2 != 0)
    return result