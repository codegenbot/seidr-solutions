Here is the solution:

return (std::next(lst.begin(), 1) == lst.end()) ? nullptr : *std::next(lst.begin(), 1);