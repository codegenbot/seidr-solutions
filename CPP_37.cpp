vector<float> even_elements;

    // Extract even index elements
    for(size_t i = 0; i < l.size(); i += 2) {
        even_elements.push_back(l[i]);
    }

    // Sort the even index elements
    sort(even_elements.begin(), even_elements.end());

    // Replace even index elements in the original vector with sorted values
    for(size_t i = 0; i < l.size(); i += 2) {
        l[i] = even_elements[i/2];
    }

    return l;
}