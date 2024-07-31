namespace std {
    void* operator new(std::size_t) throw() { return ::operator new(std::size_t); }
}